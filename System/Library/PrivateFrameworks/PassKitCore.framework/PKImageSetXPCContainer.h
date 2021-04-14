/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:22 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_xpc_object;
@class NSObject, NSData;

@interface PKImageSetXPCContainer : NSObject <NSSecureCoding> {

	unsigned long long _length;
	BOOL _isShmem;
	unsigned long long _offset;
	NSObject*<OS_xpc_object> _data;
	NSData* _imageSetHash;

}

@property (nonatomic,readonly) NSData * imageSetHash;              //@synthesize imageSetHash=_imageSetHash - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)purge;
-(NSData *)imageSetHash;
-(id)containedImageSet;
-(id)initWithWithXPCObject:(id)arg1 hash:(id)arg2 ;
-(id)initWithWithXPCObject:(id)arg1 length:(unsigned long long)arg2 isSharedMemory:(BOOL)arg3 offset:(unsigned long long)arg4 hash:(id)arg5 ;
@end

