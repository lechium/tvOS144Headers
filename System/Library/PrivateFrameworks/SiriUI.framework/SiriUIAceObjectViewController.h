/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <SiriUI/SiriUIViewController.h>

@protocol SiriUIAceObjectViewControllerDelegate;
@class AceObject, NSString;

@interface SiriUIAceObjectViewController : UIViewController <SiriUIViewController> {

	BOOL _utteranceUserInteractionEnabled;
	BOOL _virgin;
	AceObject* _aceObject;
	id<SiriUIAceObjectViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) AceObject * aceObject;                                                                      //@synthesize aceObject=_aceObject - In the implementation block
@property (getter=isVirgin,nonatomic,readonly) BOOL virgin;                                                              //@synthesize virgin=_virgin - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIAceObjectViewControllerDelegate> delegate;                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isUtteranceUserInteractionEnabled,nonatomic) BOOL utteranceUserInteractionEnabled;              //@synthesize utteranceUserInteractionEnabled=_utteranceUserInteractionEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SiriUIAceObjectViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SiriUIAceObjectViewControllerDelegate>)arg1 ;
-(id)_privateDelegate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(AceObject *)aceObject;
-(BOOL)isVirgin;
-(void)setAceObject:(AceObject *)arg1 ;
-(BOOL)_canShowWhileLocked;
-(double)desiredHeight;
-(void)siriWillActivateFromSource:(long long)arg1 ;
-(void)siriDidDeactivate;
-(void)wasAddedToTranscript;
-(BOOL)isUtteranceUserInteractionEnabled;
-(void)setUtteranceUserInteractionEnabled:(BOOL)arg1 ;
-(BOOL)removedAfterDialogProgresses;
-(void)_setVirgin:(BOOL)arg1 ;
-(long long)_pinAnimationType;
-(long long)_insertionAnimation;
-(long long)_replacementAnimation;
-(double)_insertionAnimatedZPosition;
-(void)_aceObjectViewControllerWillBeRemoved;
-(BOOL)_shouldSkipAnimationsInAlternateSpeeds;
@end

