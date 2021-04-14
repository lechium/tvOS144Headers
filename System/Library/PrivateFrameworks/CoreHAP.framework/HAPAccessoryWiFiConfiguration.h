/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreHAP/HAPAccessoryConfiguration.h>

@class NSString, NSData;

@interface HAPAccessoryWiFiConfiguration : HAPAccessoryConfiguration {

	NSString* _ssid;
	NSData* _psk;
	NSString* _isoCountryCode;

}

@property (nonatomic,readonly) NSString * ssid;                        //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,readonly) NSData * psk;                           //@synthesize psk=_psk - In the implementation block
@property (nonatomic,readonly) NSString * isoCountryCode;              //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
+(id)accessoryConfigurationWithSsid:(id)arg1 psk:(id)arg2 country:(id)arg3 ;
-(id)description;
-(NSString *)isoCountryCode;
-(NSString *)ssid;
-(NSData *)psk;
-(id)initWithSSID:(id)arg1 psk:(id)arg2 country:(id)arg3 ;
@end
