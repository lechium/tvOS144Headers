/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:29 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol INOpenSettingIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * punchoutUrl; 
@property (nonatomic,copy) NSString * errorDetail; 
@required
-(long long)code;
-(NSString *)punchoutUrl;
-(void)setPunchoutUrl:(id)arg1;
-(NSString *)errorDetail;
-(void)setErrorDetail:(id)arg1;

@end

