/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:50 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSDictionary, SFPeerDevice;

@interface SFActivityAdvertisement : NSObject <NSSecureCoding> {

	long long _advertisementVersion;
	NSData* _advertisementPayload;
	NSDictionary* _options;
	SFPeerDevice* _device;

}

@property (readonly) long long advertisementVersion;                  //@synthesize advertisementVersion=_advertisementVersion - In the implementation block
@property (copy,readonly) NSData * advertisementPayload;              //@synthesize advertisementPayload=_advertisementPayload - In the implementation block
@property (copy,readonly) NSDictionary * options;                     //@synthesize options=_options - In the implementation block
@property (retain,readonly) SFPeerDevice * device;                    //@synthesize device=_device - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)options;
-(SFPeerDevice *)device;
-(NSData *)advertisementPayload;
-(id)initWithAdvertisementVersion:(unsigned long long)arg1 advertisementPayload:(id)arg2 options:(id)arg3 device:(id)arg4 ;
-(long long)advertisementVersion;
@end

