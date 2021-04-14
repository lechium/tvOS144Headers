/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:28:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol SUICSiriLanguageDelegate;
@class NSString;

@interface SUICSiriLanguage : NSObject {

	BOOL _setupAssistantHasCompletedInitialRunChecked;
	BOOL _setupAssistantHasCompletedInitialRunAvailable;
	NSString* _spokenLanguageCode;
	id<SUICSiriLanguageDelegate> _delegate;

}

@property (getter=_delegate,nonatomic,__weak,readonly) id<SUICSiriLanguageDelegate> delegate;                                                       //@synthesize delegate=_delegate - In the implementation block
@property (setter=_setSpokenLanguageCode:,nonatomic,copy) NSString * spokenLanguageCode;                                                            //@synthesize spokenLanguageCode=_spokenLanguageCode - In the implementation block
@property (assign,nonatomic) BOOL setupAssistantHasCompletedInitialRunChecked;                                                                      //@synthesize setupAssistantHasCompletedInitialRunChecked=_setupAssistantHasCompletedInitialRunChecked - In the implementation block
@property (assign,getter=_setupAssistantHasCompletedInitialRunAvailable,nonatomic) BOOL setupAssistantHasCompletedInitialRunAvailable;              //@synthesize setupAssistantHasCompletedInitialRunAvailable=_setupAssistantHasCompletedInitialRunAvailable - In the implementation block
-(id)init;
-(void)dealloc;
-(id)_delegate;
-(id)initWithDelegate:(id)arg1 ;
-(void)_currentLocaleDidChange:(id)arg1 ;
-(id)_computeSpokenLanguageCode;
-(void)_spokenLanguageDidChange:(id)arg1 ;
-(void)_updateSpokenLanguageCode;
-(void)_setSpokenLanguageCode:(id)arg1 ;
-(BOOL)_setupAssistantHasCompletedInitialRunAvailable;
-(NSString *)spokenLanguageCode;
-(BOOL)setupAssistantHasCompletedInitialRunChecked;
-(void)setSetupAssistantHasCompletedInitialRunChecked:(BOOL)arg1 ;
-(void)setSetupAssistantHasCompletedInitialRunAvailable:(BOOL)arg1 ;
@end

