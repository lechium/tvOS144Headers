/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:07 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
#import <CoreAutoLayout/NSLayoutConstraint.h>

@interface NSAutoresizingMaskLayoutConstraint : NSLayoutConstraint
+(id)oldUIConstraintsWithAutoresizingMask:(unsigned long long)arg1 subitem:(id)arg2 frame:(CGRect)arg3 superitem:(id)arg4 bounds:(CGRect)arg5 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 constant:(double)arg7 ;
+(id)constraintsWithAutoresizingMask:(unsigned long long)arg1 subitem:(id)arg2 frame:(CGRect)arg3 superitem:(id)arg4 bounds:(CGRect)arg5 ;
-(int)_constraintType;
-(id)descriptionAccessory;
-(id)_viewForAutoresizingMask;
@end

