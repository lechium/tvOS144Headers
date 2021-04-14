/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:31:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface HMDCapabilityFlags : HMFObject <NSSecureCoding> {

	NSData* _bytesData;

}

@property (readonly) NSData * bytesData;              //@synthesize bytesData=_bytesData - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(id)description;
-(id)initWithData:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCapabilities:(id)arg1 ;
-(BOOL)hasCapabilities:(id)arg1 ;
-(id)initWithCapabilityOptions:(unsigned long long)arg1 ;
-(NSData *)bytesData;
@end

