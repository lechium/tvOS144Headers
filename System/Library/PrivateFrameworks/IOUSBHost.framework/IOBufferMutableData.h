/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:32 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IOUSBHost.framework/IOUSBHost
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreFoundation/NSMutableData.h>

@interface IOBufferMutableData : NSMutableData {

	void* _bytes;
	unsigned long long _length;
	/*^block*/id _deallocator;

}

@property (copy) id deallocator;              //@synthesize deallocator=_deallocator - In the implementation block
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(void*)mutableBytes;
-(void)setLength:(unsigned long long)arg1 ;
-(id)initWithBytesNoCopy:(void*)arg1 length:(unsigned long long)arg2 deallocator:(/*^block*/id)arg3 ;
-(void)setDeallocator:(id)arg1 ;
-(id)deallocator;
@end

