/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:22:16 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/Intents.framework/Intents
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber, NSString, INSpeakableString;


@protocol INSetProfileInCarIntentExport <NSObject,JSExport>
@property (nonatomic,copy) NSNumber * profileNumber; 
@property (nonatomic,copy) NSString * profileName; 
@property (nonatomic,copy) NSNumber * defaultProfile; 
@property (nonatomic,copy) INSpeakableString * carName; 
@required
-(id)init;
-(INSpeakableString *)carName;
-(void)setCarName:(id)arg1;
-(void)setProfileName:(id)arg1;
-(NSString *)profileName;
-(NSNumber *)profileNumber;
-(void)setProfileNumber:(id)arg1;
-(NSNumber *)defaultProfile;
-(void)setDefaultProfile:(id)arg1;

@end

