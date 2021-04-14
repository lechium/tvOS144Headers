/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:06 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSObservationSource.h>

@protocol NSLayoutItem;
@class NSArray, NSLayoutRect;

@interface _NSLayoutRectObservable : NSObservationSource {

	NSArray* _anchorObservations;
	NSLayoutRect* _rectangle;
	id<NSLayoutItem> _layoutItem;

}
+(id)observableForRect:(id)arg1 inItem:(id)arg2 ;
-(void)dealloc;
@end
