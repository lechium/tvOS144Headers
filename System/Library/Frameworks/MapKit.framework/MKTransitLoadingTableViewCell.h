/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MapKit/MKCustomSeparatorTableViewCell.h>

@class _MKUILabel, UIActivityIndicatorView;

@interface MKTransitLoadingTableViewCell : MKCustomSeparatorTableViewCell {

	_MKUILabel* _loadingLabel;
	UIActivityIndicatorView* _loadingIndicator;

}
-(void)dealloc;
-(void)startAnimating;
-(void)stopAnimating;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end

