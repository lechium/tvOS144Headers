//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CALayer;
@protocol BKDisplayAnnotationContent;

@protocol BKDisplayAnnotationStyle <NSObject>
- (void)applyToLayer:(CALayer *)arg1 forContent:(id <BKDisplayAnnotationContent>)arg2;

@optional
- (void)sizeLayer:(CALayer *)arg1 toFitAtScale:(double)arg2;
@end

