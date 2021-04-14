/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:23 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MKPlaceHoursViewDelegate.h>

@class GEOLinkedService, NSArray, UIView, UIImageView, _MKUILabel, NSLayoutConstraint, NSString;

@interface MKPlaceCompleteHoursView : UIView <MKPlaceHoursViewDelegate> {

	GEOLinkedService* _linkedService;
	NSArray* _sortedBusinessHours;
	UIView* _containerViewForHoursAndCategoryName;
	UIImageView* _categoryIconView;
	_MKUILabel* _localizedCategoryNameLabel;
	NSLayoutConstraint* _hoursTopLabelBaselineToCategoryName;
	NSArray* _placeHoursViews;

}

@property (nonatomic,retain) NSArray * placeHoursViews;              //@synthesize placeHoursViews=_placeHoursViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)commonInit;
-(void)_contentSizeDidChange;
-(void)_setUpConstraints;
-(void)hoursViewDidUpdate:(id)arg1 ;
-(id)initWithLinkedService:(id)arg1 showTodaysHoursOnly:(BOOL)arg2 ;
-(NSArray *)placeHoursViews;
-(void)setPlaceHoursViews:(NSArray *)arg1 ;
@end

