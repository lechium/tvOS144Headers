/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRunShortcutEvent : WFEvent {

	BOOL _completed;
	BOOL _didRunRemotely;
	BOOL _isFromAutomationSuggestion;
	unsigned _actionCount;
	unsigned _numberOfDialogsPresented;
	NSString* _key;
	NSString* _shortcutSource;
	NSString* _runSource;
	NSString* _automationType;
	NSString* _galleryIdentifier;
	NSString* _automationSuggestionsTrialIdentifier;

}

@property (nonatomic,copy) NSString * key;                                               //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * shortcutSource;                                    //@synthesize shortcutSource=_shortcutSource - In the implementation block
@property (nonatomic,copy) NSString * runSource;                                         //@synthesize runSource=_runSource - In the implementation block
@property (nonatomic,copy) NSString * automationType;                                    //@synthesize automationType=_automationType - In the implementation block
@property (nonatomic,copy) NSString * galleryIdentifier;                                 //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * automationSuggestionsTrialIdentifier;              //@synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier - In the implementation block
@property (assign,nonatomic) unsigned actionCount;                                       //@synthesize actionCount=_actionCount - In the implementation block
@property (assign,nonatomic) unsigned numberOfDialogsPresented;                          //@synthesize numberOfDialogsPresented=_numberOfDialogsPresented - In the implementation block
@property (assign,nonatomic) BOOL completed;                                             //@synthesize completed=_completed - In the implementation block
@property (assign,nonatomic) BOOL didRunRemotely;                                        //@synthesize didRunRemotely=_didRunRemotely - In the implementation block
@property (assign,nonatomic) BOOL isFromAutomationSuggestion;                            //@synthesize isFromAutomationSuggestion=_isFromAutomationSuggestion - In the implementation block
+(Class)codableEventClass;
+(id)serializablePropertyTransformers;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)runSource;
-(void)setRunSource:(NSString *)arg1 ;
-(void)setDidRunRemotely:(BOOL)arg1 ;
-(BOOL)didRunRemotely;
-(void)setActionCount:(unsigned)arg1 ;
-(unsigned)actionCount;
-(NSString *)galleryIdentifier;
-(void)setGalleryIdentifier:(NSString *)arg1 ;
-(NSString *)shortcutSource;
-(void)setShortcutSource:(NSString *)arg1 ;
-(NSString *)automationSuggestionsTrialIdentifier;
-(void)setAutomationSuggestionsTrialIdentifier:(NSString *)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(unsigned)numberOfDialogsPresented;
-(void)setNumberOfDialogsPresented:(unsigned)arg1 ;
-(BOOL)isFromAutomationSuggestion;
-(void)setIsFromAutomationSuggestion:(BOOL)arg1 ;
@end

