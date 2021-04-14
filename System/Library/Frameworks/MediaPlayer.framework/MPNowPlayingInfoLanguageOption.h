/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:43 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSArray;

@interface MPNowPlayingInfoLanguageOption : NSObject {

	void* _mrLanguageOption;

}

@property (nonatomic,readonly) void* mrLanguageOption;                               //@synthesize mrLanguageOption=_mrLanguageOption - In the implementation block
@property (nonatomic,readonly) unsigned long long languageOptionType; 
@property (nonatomic,readonly) NSString * languageTag; 
@property (nonatomic,readonly) NSArray * languageOptionCharacteristics; 
@property (nonatomic,readonly) NSString * displayName; 
@property (nonatomic,readonly) NSString * identifier; 
-(void)dealloc;
-(NSString *)identifier;
-(NSString *)displayName;
-(id)initWithType:(unsigned long long)arg1 languageTag:(id)arg2 characteristics:(id)arg3 displayName:(id)arg4 identifier:(id)arg5 ;
-(NSString *)languageTag;
-(id)initWithMRLanguageOption:(void*)arg1 ;
-(BOOL)isAutomaticLegibleLanguageOption;
-(BOOL)isAutomaticAudibleLanguageOption;
-(unsigned long long)languageOptionType;
-(NSArray *)languageOptionCharacteristics;
-(id)copyExternalRepresentation;
-(BOOL)isEqualToLanguageOption:(id)arg1 ;
-(void*)mrLanguageOption;
@end

