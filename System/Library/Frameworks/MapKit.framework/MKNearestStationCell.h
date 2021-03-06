/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:21 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UITableViewCell.h>

@class _MKUILabel, MKTransitInfoLabelView, UIImageView, NSLayoutConstraint;

@interface MKNearestStationCell : UITableViewCell {

	_MKUILabel* _stationTitleLabel;
	MKTransitInfoLabelView* _stationInfoLabel;
	UIImageView* _stationImageView;
	NSLayoutConstraint* _stationLabelToImageViewConstraint;
	NSLayoutConstraint* _stationLabelToLeadingEdgeConstraint;
	NSLayoutConstraint* _stationLabelToTopConstraint;

}
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)didMoveToWindow;
-(void)_contentSizeCategoryDidChange;
-(void)_updateConstraintValues;
-(void)configureWithNearestStation:(id)arg1 ;
@end

