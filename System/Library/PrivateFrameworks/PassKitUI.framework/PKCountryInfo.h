/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:25 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface PKCountryInfo : NSObject {

	NSString* _countryCode;
	NSString* _localizedCountryName;

}

@property (nonatomic,retain) NSString * countryCode;                       //@synthesize countryCode=_countryCode - In the implementation block
@property (nonatomic,retain) NSString * localizedCountryName;              //@synthesize localizedCountryName=_localizedCountryName - In the implementation block
-(NSString *)countryCode;
-(void)setCountryCode:(NSString *)arg1 ;
-(void)setLocalizedCountryName:(NSString *)arg1 ;
-(NSString *)localizedCountryName;
@end

