/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:02 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UICollectionViewCell.h>

@protocol UIDebuggingInformationHierarchyCellDelegate;
@class UIButton, UILabel, NSIndexPath, NSLayoutConstraint, NSString;

@interface UIDebuggingInformationHierarchyCell : UICollectionViewCell {

	UIButton* _disclosureButton;
	UILabel* _mainLabel;
	UIButton* _infoButton;
	NSIndexPath* _indexPath;
	BOOL _collapsedBeneath;
	NSLayoutConstraint* _disclosureButtonAvailableConstraint;
	NSLayoutConstraint* _disclosureButtonUnavailableConstraint;
	BOOL _disclosureIndicatorHidden;
	NSString* _name;
	id<UIDebuggingInformationHierarchyCellDelegate> _delegate;

}

@property (nonatomic,retain) NSString * name;                                                              //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) UIButton * infoButton; 
@property (assign,nonatomic,__weak) id<UIDebuggingInformationHierarchyCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath; 
@property (assign,nonatomic) BOOL disclosureIndicatorHidden;                                               //@synthesize disclosureIndicatorHidden=_disclosureIndicatorHidden - In the implementation block
-(NSString *)name;
-(id<UIDebuggingInformationHierarchyCellDelegate>)delegate;
-(void)setDelegate:(id<UIDebuggingInformationHierarchyCellDelegate>)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSIndexPath *)indexPath;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(UIButton *)infoButton;
-(void)deliverToggle;
-(void)displayDetailsForCell;
-(void)setDisclosureIndicatorHidden:(BOOL)arg1 ;
-(BOOL)disclosureIndicatorHidden;
@end
