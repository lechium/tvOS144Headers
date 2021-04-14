/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXLayoutPerformerOutput : NSObject {

	CGRect* _layoutRects;
	long long _capacity;
	long long _lastIndex;

}

@property (nonatomic,readonly) long long count; 
-(void)dealloc;
-(long long)count;
-(id)initWithCapacity:(long long)arg1 ;
-(void)appendLayoutRect:(CGRect)arg1 ;
-(void)removeAllRects;
-(CGRect)layoutRectAtIndex:(long long)arg1 ;
@end

