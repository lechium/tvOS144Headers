/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:37:20 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, _UIFocusMapSnapshot, _UIFocusMapSearchInfo;

@interface _UIFocusMapSnapshotDebugInfo : NSObject {

	UIImage* _image;
	_UIFocusMapSnapshot* _snapshot;
	_UIFocusMapSearchInfo* _focusMapSearchInfo;
	CGPoint _imageAnchorPoint;

}

@property (nonatomic,readonly) _UIFocusMapSnapshot * snapshot;                                 //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,__weak,readonly) _UIFocusMapSearchInfo * focusMapSearchInfo;              //@synthesize focusMapSearchInfo=_focusMapSearchInfo - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                                //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGPoint imageAnchorPoint;                                       //@synthesize imageAnchorPoint=_imageAnchorPoint - In the implementation block
+(id)_summaryImageForDebugInfoArray:(id)arg1 forFocusMovementWithInfo:(id)arg2 scaleFactor:(double)arg3 ;
-(_UIFocusMapSnapshot *)snapshot;
-(UIImage *)image;
-(id)_drawImage;
-(CGRect)_rectContainingAllFocusRegions;
-(CGPoint)imageAnchorPoint;
-(id)initWithSnapshot:(id)arg1 focusMapSearchInfo:(id)arg2 ;
-(_UIFocusMapSearchInfo *)focusMapSearchInfo;
@end

