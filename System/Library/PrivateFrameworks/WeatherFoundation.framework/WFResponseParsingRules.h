/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:44 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol WFSettings;
@interface WFResponseParsingRules : NSObject {

	id<WFSettings> _settings;

}

@property (nonatomic,readonly) id<WFSettings> settings;              //@synthesize settings=_settings - In the implementation block
+(BOOL)aqiEnabledByRules:(id)arg1 forLocation:(id)arg2 ;
-(id<WFSettings>)settings;
-(id)initWithSettings:(id)arg1 ;
-(BOOL)aqiEnabledForCountryCode:(id)arg1 ;
@end

