/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUISettingTemplateViewController.h>

@class SiriUISelectionTemplateView;

@interface SiriUISelectionTemplateViewController : SiriUISettingTemplateViewController

@property (assign,nonatomic,__weak) id<SiriUISelectionTemplateViewControllerDelegate> delegate; 
@property (nonatomic,retain) id<SiriUISelectionTemplateModel> templateModel; 
@property (nonatomic,retain) SiriUISelectionTemplateView * view; 
@property (assign,nonatomic) BOOL selected; 
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)selected;
-(void)loadView;
-(Class)templateViewClass;
-(void)_didSelectChoiceFromSender:(id)arg1 ;
@end

