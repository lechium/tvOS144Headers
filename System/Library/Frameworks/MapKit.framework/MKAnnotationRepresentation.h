/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:19 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MKAnnotationRepresentation <NSObject>
@required
-(void)prepareForReuse;
-(BOOL)isPersistent;
-(id)reuseIdentifier;
-(id)viewRepresentation;
-(BOOL)_shouldDeselectWhenDragged;
-(void)_setHiddenForOffscreen:(BOOL)arg1;
-(void)_invalidateCachedCoordinate;
-(BOOL)_isPendingSelectionAnimated;

@end
