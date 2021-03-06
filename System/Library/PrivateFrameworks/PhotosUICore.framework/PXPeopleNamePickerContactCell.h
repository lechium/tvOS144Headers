/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:27:03 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXPeopleNamePickerCell.h>

@class CNAvatarView, UILabel, UIView, NSArray;

@interface PXPeopleNamePickerContactCell : PXPeopleNamePickerCell {

	CNAvatarView* _contactAvatarView;
	UILabel* _subtitleLabel;
	UIView* _labelsContainer;
	NSArray* _constraintsForVisibleSubtitle;
	NSArray* _constraintsForHiddenSubtitle;

}

@property (assign,nonatomic,__weak) UIView * labelsContainer;                        //@synthesize labelsContainer=_labelsContainer - In the implementation block
@property (nonatomic,retain) NSArray * constraintsForVisibleSubtitle;                //@synthesize constraintsForVisibleSubtitle=_constraintsForVisibleSubtitle - In the implementation block
@property (nonatomic,retain) NSArray * constraintsForHiddenSubtitle;                 //@synthesize constraintsForHiddenSubtitle=_constraintsForHiddenSubtitle - In the implementation block
@property (nonatomic,__weak,readonly) CNAvatarView * contactAvatarView;              //@synthesize contactAvatarView=_contactAvatarView - In the implementation block
@property (nonatomic,__weak,readonly) UILabel * subtitleLabel;                       //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(UILabel *)subtitleLabel;
-(void)updateConstraints;
-(CNAvatarView *)contactAvatarView;
-(UIView *)labelsContainer;
-(void)setLabelsContainer:(UIView *)arg1 ;
-(NSArray *)constraintsForVisibleSubtitle;
-(void)setConstraintsForVisibleSubtitle:(NSArray *)arg1 ;
-(NSArray *)constraintsForHiddenSubtitle;
-(void)setConstraintsForHiddenSubtitle:(NSArray *)arg1 ;
@end

