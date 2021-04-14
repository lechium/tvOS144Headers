/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKPlacePhotoGalleryViewControllerDelegate <NSObject>
@optional
-(void)placePhotoGallery:(id)arg1 willCloseAtIndex:(unsigned long long)arg2;
-(void)placePhotoGalleryDidCloseAtIndex:(unsigned long long)arg1;
-(void)placePhotoGalleryAdditionalViewTapped:(id)arg1;
-(void)placePhotoGallery:(id)arg1 attributionViewTappedAtIndex:(unsigned long long)arg2;
-(void)placePhotoGalleryDidScrollLeftToIndex:(unsigned long long)arg1;
-(void)placePhotoGalleryDidScrollRightToIndex:(unsigned long long)arg1;
-(void)placePhotoGalleryDidScrollToIndex:(unsigned long long)arg1;
-(void)placePhotoGallery:(id)arg1 openButtonTappedAtIndex:(unsigned long long)arg2;
-(void)placePhotoGalleryDidFinishDismissing:(id)arg1;
-(void)placePhotoGallery:(id)arg1 didSelectReportImageAtIndex:(unsigned long long)arg2;
-(void)placePhotoGalleryDidSelectAddPhoto:(id)arg1;

@required
-(id)placePhotoGalleryImageViewForPhotoAtIndex:(unsigned long long)arg1;

@end

