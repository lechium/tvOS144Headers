/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:04 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ContentKit/ContentKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPBRunShortcutEvent : PBCodable <NSCopying> {

	unsigned _actionCount;
	NSString* _automationSuggestionsTrialIdentifier;
	NSString* _automationType;
	NSString* _galleryIdentifier;
	NSString* _key;
	unsigned _numberOfDialogsPresented;
	NSString* _runSource;
	NSString* _shortcutSource;
	BOOL _completed;
	BOOL _didPresentShareSheet;
	BOOL _didRunRemotely;
	BOOL _isFromAutomationSuggestion;
	SCD_Struct_WF17 _has;

}

@property (nonatomic,readonly) BOOL hasKey; 
@property (nonatomic,retain) NSString * key;                                               //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) BOOL hasRunSource; 
@property (nonatomic,retain) NSString * runSource;                                         //@synthesize runSource=_runSource - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationType; 
@property (nonatomic,retain) NSString * automationType;                                    //@synthesize automationType=_automationType - In the implementation block
@property (assign,nonatomic) BOOL hasActionCount; 
@property (assign,nonatomic) unsigned actionCount;                                         //@synthesize actionCount=_actionCount - In the implementation block
@property (assign,nonatomic) BOOL hasCompleted; 
@property (assign,nonatomic) BOOL completed;                                               //@synthesize completed=_completed - In the implementation block
@property (assign,nonatomic) BOOL hasDidRunRemotely; 
@property (assign,nonatomic) BOOL didRunRemotely;                                          //@synthesize didRunRemotely=_didRunRemotely - In the implementation block
@property (nonatomic,readonly) BOOL hasShortcutSource; 
@property (nonatomic,retain) NSString * shortcutSource;                                    //@synthesize shortcutSource=_shortcutSource - In the implementation block
@property (nonatomic,readonly) BOOL hasGalleryIdentifier; 
@property (nonatomic,retain) NSString * galleryIdentifier;                                 //@synthesize galleryIdentifier=_galleryIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasNumberOfDialogsPresented; 
@property (assign,nonatomic) unsigned numberOfDialogsPresented;                            //@synthesize numberOfDialogsPresented=_numberOfDialogsPresented - In the implementation block
@property (assign,nonatomic) BOOL hasDidPresentShareSheet; 
@property (assign,nonatomic) BOOL didPresentShareSheet;                                    //@synthesize didPresentShareSheet=_didPresentShareSheet - In the implementation block
@property (assign,nonatomic) BOOL hasIsFromAutomationSuggestion; 
@property (assign,nonatomic) BOOL isFromAutomationSuggestion;                              //@synthesize isFromAutomationSuggestion=_isFromAutomationSuggestion - In the implementation block
@property (nonatomic,readonly) BOOL hasAutomationSuggestionsTrialIdentifier; 
@property (nonatomic,retain) NSString * automationSuggestionsTrialIdentifier;              //@synthesize automationSuggestionsTrialIdentifier=_automationSuggestionsTrialIdentifier - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)key;
-(id)dictionaryRepresentation;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)completed;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setHasCompleted:(BOOL)arg1 ;
-(BOOL)hasCompleted;
-(BOOL)hasKey;
-(NSString *)runSource;
-(void)setRunSource:(NSString *)arg1 ;
-(void)setDidRunRemotely:(BOOL)arg1 ;
-(void)setHasDidRunRemotely:(BOOL)arg1 ;
-(BOOL)hasDidRunRemotely;
-(BOOL)didRunRemotely;
-(void)setActionCount:(unsigned)arg1 ;
-(void)setHasActionCount:(BOOL)arg1 ;
-(BOOL)hasActionCount;
-(BOOL)hasGalleryIdentifier;
-(BOOL)hasShortcutSource;
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
-(BOOL)hasAutomationType;
-(BOOL)hasAutomationSuggestionsTrialIdentifier;
-(BOOL)hasRunSource;
-(void)setHasNumberOfDialogsPresented:(BOOL)arg1 ;
-(BOOL)hasNumberOfDialogsPresented;
-(void)setDidPresentShareSheet:(BOOL)arg1 ;
-(void)setHasDidPresentShareSheet:(BOOL)arg1 ;
-(BOOL)hasDidPresentShareSheet;
-(void)setHasIsFromAutomationSuggestion:(BOOL)arg1 ;
-(BOOL)hasIsFromAutomationSuggestion;
-(BOOL)didPresentShareSheet;
@end

