/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:31 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PKOSVersionRequirement;

@interface PKAppleCashSharingRecipientCapabilities : NSObject <NSSecureCoding, NSCopying> {

	BOOL _supportsManatee;
	NSString* _handle;
	NSString* _altDSID;
	NSString* _deviceRegion;
	PKOSVersionRequirement* _fromDeviceVersion;

}

@property (nonatomic,copy) NSString * handle;                                         //@synthesize handle=_handle - In the implementation block
@property (nonatomic,copy) NSString * altDSID;                                        //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy) NSString * deviceRegion;                                   //@synthesize deviceRegion=_deviceRegion - In the implementation block
@property (assign,nonatomic) BOOL supportsManatee;                                    //@synthesize supportsManatee=_supportsManatee - In the implementation block
@property (nonatomic,retain) PKOSVersionRequirement * fromDeviceVersion;              //@synthesize fromDeviceVersion=_fromDeviceVersion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)appleCashSharingRecipientCapbilitesRequestWithProtobuf:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)handle;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)deviceRegion;
-(void)setDeviceRegion:(NSString *)arg1 ;
-(id)protobuf;
-(PKOSVersionRequirement *)fromDeviceVersion;
-(void)setSupportsManatee:(BOOL)arg1 ;
-(void)setFromDeviceVersion:(PKOSVersionRequirement *)arg1 ;
-(BOOL)supportsManatee;
@end

