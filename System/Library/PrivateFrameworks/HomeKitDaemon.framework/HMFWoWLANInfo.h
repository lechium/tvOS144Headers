/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:30:52 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSArray;

@interface HMFWoWLANInfo : HMFObject <NSSecureCoding> {

	NSData* _primaryMACAddress;
	NSArray* _additionalMACAddresses;

}

@property (nonatomic,readonly) NSData * primaryMACAddress;                    //@synthesize primaryMACAddress=_primaryMACAddress - In the implementation block
@property (nonatomic,readonly) NSArray * additionalMACAddresses;              //@synthesize additionalMACAddresses=_additionalMACAddresses - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)primaryMACAddress;
-(id)initWithPrimaryIdentifier:(id)arg1 wifiIdentifiers:(id)arg2 ;
-(NSArray *)additionalMACAddresses;
@end

