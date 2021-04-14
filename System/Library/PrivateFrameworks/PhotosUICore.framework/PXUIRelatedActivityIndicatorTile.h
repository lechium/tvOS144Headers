/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:51 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXUIRelatedPlaceholderTile.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@class PXPhotoAnalysisStatusController, UIActivityIndicatorView, UILabel, NSString;

@interface PXUIRelatedActivityIndicatorTile : PXUIRelatedPlaceholderTile <PXChangeObserver> {

	BOOL _animating;
	PXPhotoAnalysisStatusController* _statusController;
	UIActivityIndicatorView* __activityIndicatorView;
	UILabel* __label;

}

@property (nonatomic,readonly) UIActivityIndicatorView * _activityIndicatorView;              //@synthesize _activityIndicatorView=__activityIndicatorView - In the implementation block
@property (nonatomic,readonly) UILabel * _label;                                              //@synthesize _label=__label - In the implementation block
@property (assign,getter=isAnimating,nonatomic) BOOL animating;                               //@synthesize animating=_animating - In the implementation block
@property (nonatomic,retain) PXPhotoAnalysisStatusController * statusController;              //@synthesize statusController=_statusController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(UILabel *)_label;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)isAnimating;
-(UIActivityIndicatorView *)_activityIndicatorView;
-(void)becomeReusable;
-(void)didApplyGeometry:(PXTileGeometry*)arg1 withUserData:(id)arg2 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(void)setStatusController:(PXPhotoAnalysisStatusController *)arg1 ;
-(void)_updateLabelText;
-(PXPhotoAnalysisStatusController *)statusController;
@end

