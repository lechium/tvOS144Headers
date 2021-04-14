/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class EMFEmojiPreferencesClient, NSObject, NSArray, NSDictionary;

@interface UIKeyboardEmojiPreferences : NSObject {

	EMFEmojiPreferencesClient* _preferencesClient;
	NSObject*<OS_dispatch_queue> _clientDispatchQueue;
	NSArray* _localRecentsWithClient;
	NSArray* _localRecentsWithoutClient;

}

@property (nonatomic,readonly) EMFEmojiPreferencesClient * preferencesClient; 
@property (assign,nonatomic) unsigned long long maximumRecentsCount; 
@property (nonatomic,retain) NSArray * recents; 
@property (nonatomic,retain) NSDictionary * skinToneBaseKeyPreferences; 
@property (assign,nonatomic) long long selectedCategoryType; 
@property (nonatomic,readonly) BOOL hasDisplayedSkinToneHelp; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)writeEmojiDefaults;
-(NSArray *)recents;
-(void)setRecents:(NSArray *)arg1 ;
-(void)readEmojiDefaults;
-(unsigned long long)maximumRecentsCount;
-(void)didDisplaySkinToneHelp;
-(BOOL)hasDisplayedSkinToneHelp;
-(void)setMaximumRecentsCount:(unsigned long long)arg1 ;
-(id)lastUsedVariantEmojiForEmojiString:(id)arg1 ;
-(void)emojiUsed:(id)arg1 language:(id)arg2 ;
-(void)clearEmojiKeyboardPreferenceClient;
-(BOOL)hasLastUsedVariantForEmojiString:(id)arg1 ;
-(void)updateSkinToneBaseKey:(id)arg1 variantUsed:(id)arg2 ;
-(id)recentEmojiAtIndex:(long long)arg1 size:(unsigned long long*)arg2 ;
-(id)emojiWithoutDuplicateRecents:(id)arg1 ;
-(void)refreshLocalRecents;
-(NSDictionary *)skinToneBaseKeyPreferences;
-(long long)selectedCategoryType;
-(long long)emojiCategoryDefaultsIndex:(id)arg1 ;
-(void)setSelectedCategoryType:(long long)arg1 ;
-(void)setEmojiCategoryDefaultsIndex:(long long)arg1 forCategory:(id)arg2 ;
-(void)emojiUsed:(id)arg1 ;
-(void)handleSuspend:(id)arg1 ;
-(void)handleWrite:(id)arg1 ;
-(void)handleRead:(id)arg1 ;
-(void)clearLocalRecentsCache;
-(EMFEmojiPreferencesClient *)preferencesClient;
-(void)_usageForEmoji:(id)arg1 language:(id)arg2 mode:(id)arg3 typingName:(id)arg4 ;
-(void)setSkinToneBaseKeyPreferences:(NSDictionary *)arg1 ;
-(void)emojiPredicted:(id)arg1 typingName:(id)arg2 language:(id)arg3 ;
-(id)typingNameForEmoji:(id)arg1 language:(id)arg2 ;
@end

