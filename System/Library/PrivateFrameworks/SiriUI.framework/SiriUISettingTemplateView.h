/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SiriUI/SiriUIBaseTemplateView.h>

@class UILabel;

@interface SiriUISettingTemplateView : SiriUIBaseTemplateView {

	UILabel* _textLabel;

}

@property (assign,nonatomic,__weak) id<SiriUISettingTemplateModel> dataSource; 
-(id)initWithDataSource:(id)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(double)desiredHeight;
@end

