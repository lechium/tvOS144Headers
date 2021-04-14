/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:56 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RemoteUI/RUIElement.h>

@class UIView, UIActivityIndicatorView, UILabel, RUIHeaderView, RemoteUISectionFooter, RUIObjectModel, UIColor, RUIHeaderElement, RUIFooterElement;

@interface RUISpinnerView : RUIElement {

	UIView* _view;
	UIActivityIndicatorView* _spinner;
	UILabel* _label;
	RUIHeaderView* _headerView;
	RemoteUISectionFooter* _footerView;
	RUIObjectModel* _objectModel;
	UIColor* _spinnerColor;
	RUIHeaderElement* _header;
	RUIFooterElement* _footer;

}

@property (assign,nonatomic,__weak) RUIObjectModel * objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) UIColor * spinnerColor;                           //@synthesize spinnerColor=_spinnerColor - In the implementation block
@property (nonatomic,retain) RUIHeaderElement * header;                        //@synthesize header=_header - In the implementation block
@property (nonatomic,retain) RUIFooterElement * footer;                        //@synthesize footer=_footer - In the implementation block
-(RUIHeaderElement *)header;
-(void)setHeader:(RUIHeaderElement *)arg1 ;
-(RUIFooterElement *)footer;
-(void)setFooter:(RUIFooterElement *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(RUIObjectModel *)objectModel;
-(void)setObjectModel:(RUIObjectModel *)arg1 ;
-(id)spinnerView;
-(void)viewDidLayout;
-(UIColor *)spinnerColor;
-(void)setSpinnerColor:(UIColor *)arg1 ;
@end

