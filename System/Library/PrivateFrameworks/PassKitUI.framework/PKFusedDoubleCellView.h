/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PKPaymentDashboardCellActionHandleable.h>

@class UIView, UIImageView, UILabel, PKPaymentPass, UIColor, NSString;

@interface PKFusedDoubleCellView : UIView <PKPaymentDashboardCellActionHandleable> {

	UIView* _separatorView;
	UIImageView* _disclosureView;
	double _topPadding;
	double _middlePadding;
	BOOL _isTemplateLayout;
	UILabel* _leftTitleView;
	UILabel* _leftDetailView;
	UILabel* _leftSubDetailView;
	UILabel* _rightTitleView;
	UILabel* _rightDetailView;
	UILabel* _rightSubDetailView;
	unsigned long long _deferUpdateCounter;
	BOOL _animated;
	BOOL _enableDisclosure;
	PKPaymentPass* _pass;
	UIColor* _leftTitleColor;
	UIColor* _leftDetailColor;
	UIColor* _leftSubDetailColor;
	UIColor* _rightTitleColor;
	UIColor* _rightDetailColor;
	UIColor* _rightSubDetailColor;
	long long _leftTitleLineBreakMode;
	long long _leftDetailLineBreakMode;
	long long _leftSubDetailLineBreakMode;
	long long _rightTitleLineBreakMode;
	long long _rightDetailLineBreakMode;
	long long _rightSubDetailLineBreakMode;
	NSString* _leftTitle;
	NSString* _leftDetail;
	NSString* _leftSubDetail;
	NSString* _rightTitle;
	NSString* _rightDetail;
	NSString* _rightSubDetail;

}

@property (assign,nonatomic) BOOL enableDisclosure;                              //@synthesize enableDisclosure=_enableDisclosure - In the implementation block
@property (nonatomic,copy) PKPaymentPass * pass;                                 //@synthesize pass=_pass - In the implementation block
@property (nonatomic,copy) UIColor * leftTitleColor;                             //@synthesize leftTitleColor=_leftTitleColor - In the implementation block
@property (nonatomic,copy) UIColor * leftDetailColor;                            //@synthesize leftDetailColor=_leftDetailColor - In the implementation block
@property (nonatomic,copy) UIColor * leftSubDetailColor;                         //@synthesize leftSubDetailColor=_leftSubDetailColor - In the implementation block
@property (nonatomic,copy) UIColor * rightTitleColor;                            //@synthesize rightTitleColor=_rightTitleColor - In the implementation block
@property (nonatomic,copy) UIColor * rightDetailColor;                           //@synthesize rightDetailColor=_rightDetailColor - In the implementation block
@property (nonatomic,copy) UIColor * rightSubDetailColor;                        //@synthesize rightSubDetailColor=_rightSubDetailColor - In the implementation block
@property (assign,nonatomic) long long leftTitleLineBreakMode;                   //@synthesize leftTitleLineBreakMode=_leftTitleLineBreakMode - In the implementation block
@property (assign,nonatomic) long long leftDetailLineBreakMode;                  //@synthesize leftDetailLineBreakMode=_leftDetailLineBreakMode - In the implementation block
@property (assign,nonatomic) long long leftSubDetailLineBreakMode;               //@synthesize leftSubDetailLineBreakMode=_leftSubDetailLineBreakMode - In the implementation block
@property (assign,nonatomic) long long rightTitleLineBreakMode;                  //@synthesize rightTitleLineBreakMode=_rightTitleLineBreakMode - In the implementation block
@property (assign,nonatomic) long long rightDetailLineBreakMode;                 //@synthesize rightDetailLineBreakMode=_rightDetailLineBreakMode - In the implementation block
@property (assign,nonatomic) long long rightSubDetailLineBreakMode;              //@synthesize rightSubDetailLineBreakMode=_rightSubDetailLineBreakMode - In the implementation block
@property (nonatomic,copy) NSString * leftTitle;                                 //@synthesize leftTitle=_leftTitle - In the implementation block
@property (nonatomic,copy) NSString * leftDetail;                                //@synthesize leftDetail=_leftDetail - In the implementation block
@property (nonatomic,copy) NSString * leftSubDetail;                             //@synthesize leftSubDetail=_leftSubDetail - In the implementation block
@property (nonatomic,copy) NSString * rightTitle;                                //@synthesize rightTitle=_rightTitle - In the implementation block
@property (nonatomic,copy) NSString * rightDetail;                               //@synthesize rightDetail=_rightDetail - In the implementation block
@property (nonatomic,copy) NSString * rightSubDetail;                            //@synthesize rightSubDetail=_rightSubDetail - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(PKPaymentPass *)pass;
-(void)layoutSubviews;
-(void)beginUpdates;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)_titleFont;
-(void)setPass:(PKPaymentPass *)arg1 ;
-(void)_setupViews;
-(long long)viewType;
-(void)_performInit;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(id)_detailFont;
-(id)_subDetailFont;
-(void)_updateContent:(BOOL)arg1 ;
-(void)layoutIfNeededAnimated:(BOOL)arg1 ;
-(BOOL)enableDisclosure;
-(void)endUpdates:(BOOL)arg1 ;
-(void)setEnableDisclosure:(BOOL)arg1 ;
-(void)setLeftTitle:(NSString *)arg1 ;
-(void)setLeftDetail:(NSString *)arg1 ;
-(void)setLeftSubDetail:(NSString *)arg1 ;
-(void)setRightTitle:(NSString *)arg1 ;
-(void)setRightDetail:(NSString *)arg1 ;
-(void)setRightSubDetail:(NSString *)arg1 ;
-(BOOL)_leftNeedsThirdLine;
-(BOOL)_rightNeedsThirdLine;
-(void)setLeftTitleColor:(UIColor *)arg1 ;
-(void)setLeftDetailColor:(UIColor *)arg1 ;
-(void)setLeftSubDetailColor:(UIColor *)arg1 ;
-(void)setRightTitleColor:(UIColor *)arg1 ;
-(void)setRightDetailColor:(UIColor *)arg1 ;
-(void)setRightSubDetailColor:(UIColor *)arg1 ;
-(void)setLeftTitleLineBreakMode:(long long)arg1 ;
-(void)setLeftDetailLineBreakMode:(long long)arg1 ;
-(void)setLeftSubDetailLineBreakMode:(long long)arg1 ;
-(void)setRightTitleLineBreakMode:(long long)arg1 ;
-(void)setRightDetailLineBreakMode:(long long)arg1 ;
-(void)setRightSubDetailLineBreakMode:(long long)arg1 ;
-(UIColor *)leftTitleColor;
-(UIColor *)leftDetailColor;
-(UIColor *)leftSubDetailColor;
-(UIColor *)rightTitleColor;
-(UIColor *)rightDetailColor;
-(UIColor *)rightSubDetailColor;
-(long long)leftTitleLineBreakMode;
-(long long)leftDetailLineBreakMode;
-(long long)leftSubDetailLineBreakMode;
-(long long)rightTitleLineBreakMode;
-(long long)rightDetailLineBreakMode;
-(long long)rightSubDetailLineBreakMode;
-(NSString *)leftTitle;
-(NSString *)leftDetail;
-(NSString *)leftSubDetail;
-(NSString *)rightTitle;
-(NSString *)rightDetail;
-(NSString *)rightSubDetail;
@end

