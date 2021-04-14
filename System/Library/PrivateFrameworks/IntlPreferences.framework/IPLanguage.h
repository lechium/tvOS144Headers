/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:20:47 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/IntlPreferences.framework/IntlPreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IPLanguage : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSString* _localizedStringForName;

}

@property (nonatomic,retain) NSString * identifier;                          //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * localizedStringForName;              //@synthesize localizedStringForName=_localizedStringForName - In the implementation block
@property (nonatomic,readonly) IPLanguage * minimizedLanguage; 
+(id)languageWithIdentifier:(id)arg1 normalize:(BOOL)arg2 ;
+(id)languageWithIdentifier:(id)arg1 ;
+(id)IPLanguagesWithLanguages:(id)arg1 normalize:(BOOL)arg2 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setLocalizedStringForName:(NSString *)arg1 ;
-(IPLanguage *)minimizedLanguage;
-(NSString *)localizedStringForName;
@end

