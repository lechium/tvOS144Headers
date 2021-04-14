/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:24 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PKDeviceVersionRange;

@interface PKHardwareVersionRange : NSObject <NSSecureCoding, NSCopying> {

	PKDeviceVersionRange* _iphone;
	PKDeviceVersionRange* _watch;
	PKDeviceVersionRange* _ipad;
	PKDeviceVersionRange* _ipod;
	PKDeviceVersionRange* _appletv;

}

@property (nonatomic,readonly) PKDeviceVersionRange * iphone;               //@synthesize iphone=_iphone - In the implementation block
@property (nonatomic,readonly) PKDeviceVersionRange * watch;                //@synthesize watch=_watch - In the implementation block
@property (nonatomic,readonly) PKDeviceVersionRange * ipad;                 //@synthesize ipad=_ipad - In the implementation block
@property (nonatomic,readonly) PKDeviceVersionRange * ipod;                 //@synthesize ipod=_ipod - In the implementation block
@property (nonatomic,readonly) PKDeviceVersionRange * appletv;              //@synthesize appletv=_appletv - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(PKDeviceVersionRange *)watch;
-(id)asDictionary;
-(PKDeviceVersionRange *)iphone;
-(PKDeviceVersionRange *)ipad;
-(PKDeviceVersionRange *)ipod;
-(PKDeviceVersionRange *)appletv;
-(BOOL)isEqualToHardwareVersionRange:(id)arg1 ;
-(BOOL)matchesDeviceVersion:(id)arg1 ;
@end

