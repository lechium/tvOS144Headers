/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:55 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _UIViewCubicTimingFunction : NSObject <NSCoding, NSCopying> {

	CGPoint _point1;
	CGPoint _point2;

}

@property (nonatomic,readonly) CGPoint controlPoint1; 
@property (nonatomic,readonly) CGPoint controlPoint2; 
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithControlPoint1:(CGPoint)arg1 controlPoint2:(CGPoint)arg2 ;
-(id)_mediaTimingFunction;
-(CGPoint)controlPoint1;
-(CGPoint)controlPoint2;
@end

