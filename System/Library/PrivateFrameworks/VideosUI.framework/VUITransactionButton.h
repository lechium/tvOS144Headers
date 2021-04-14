/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:30 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIButton.h>

@class NSString, VUICircularProgress;

@interface VUITransactionButton : VUIButton {

	BOOL _waitingForTransactionToStart;
	BOOL _monitorTransaction;
	NSString* _transactionID;
	VUICircularProgress* _progressIndicator;
	NSString* _textContentTitleBackup;

}

@property (assign,getter=isWaitingForTransactionToStart,nonatomic) BOOL waitingForTransactionToStart;              //@synthesize waitingForTransactionToStart=_waitingForTransactionToStart - In the implementation block
@property (assign,nonatomic) BOOL monitorTransaction;                                                              //@synthesize monitorTransaction=_monitorTransaction - In the implementation block
@property (nonatomic,retain) VUICircularProgress * progressIndicator;                                              //@synthesize progressIndicator=_progressIndicator - In the implementation block
@property (nonatomic,copy) NSString * textContentTitleBackup;                                                      //@synthesize textContentTitleBackup=_textContentTitleBackup - In the implementation block
@property (nonatomic,copy) NSString * transactionID;                                                               //@synthesize transactionID=_transactionID - In the implementation block
-(void)dealloc;
-(void)setTransactionID:(NSString *)arg1 ;
-(NSString *)transactionID;
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)_carouselView;
-(VUICircularProgress *)progressIndicator;
-(void)setProgressIndicator:(VUICircularProgress *)arg1 ;
-(id)initWithType:(unsigned long long)arg1 interfaceStyle:(long long)arg2 ;
-(void)_buttonTapped:(id)arg1 eventName:(id)arg2 ;
-(void)_unregisterTransactionNotifications;
-(void)_layoutProgressIndicatorIfNeeded;
-(void)_startListeningForTransactionWithTransactionID:(id)arg1 ;
-(void)_updateProgressIndicatorTintColor:(id)arg1 ;
-(BOOL)monitorTransaction;
-(void)_addProgressIndicatorWithFrame:(CGRect)arg1 ;
-(void)_registerForTransactionNotification;
-(BOOL)isWaitingForTransactionToStart;
-(void)setWaitingForTransactionToStart:(BOOL)arg1 ;
-(void)setMonitorTransaction:(BOOL)arg1 ;
-(void)_handleTransactionDidStartNotification:(id)arg1 ;
-(void)_handleTransactionDidFinishNotification:(id)arg1 ;
-(NSString *)textContentTitleBackup;
-(void)setTextContentTitleBackup:(NSString *)arg1 ;
@end

