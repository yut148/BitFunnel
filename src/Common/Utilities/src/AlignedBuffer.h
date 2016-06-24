// The MIT License (MIT)

// Copyright (c) 2016, Microsoft

// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.


#pragma once


namespace BitFunnel
{
    //*************************************************************************
    //
    // AlignedBuffer provides a block of memory that is aligned to a 2^alignment
    // boundary. This is intended to be used for allocating "large" blocks of
    // memory, something like 10GB or 100GB at a time.
    //
    //*************************************************************************
    class AlignedBuffer
    {
    public:
        AlignedBuffer(size_t size, int alignment);
        ~AlignedBuffer();

        void *GetBuffer() const;
        size_t GetSize() const;

    private:
        size_t m_requestedSize;
        size_t m_actualSize;
        void *m_rawBuffer;
        void *m_alignedBuffer;
    };
}
