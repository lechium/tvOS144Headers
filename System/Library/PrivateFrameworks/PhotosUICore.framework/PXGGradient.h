/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:26:53 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface PXGGradient : NSObject <NSCopying> {

	UIColor* _startingColor;
	UIColor* _endingColor;
	long long _direction;

}

@property (nonatomic,copy,readonly) UIColor * startingColor;              //@synthesize startingColor=_startingColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * endingColor;                //@synthesize endingColor=_endingColor - In the implementation block
@property (nonatomic,readonly) long long direction;                       //@synthesize direction=_direction - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(long long)direction;
-(id)initWithStartingColor:(id)arg1 endingColor:(id)arg2 direction:(long long)arg3 ;
-(UIColor *)startingColor;
-(UIColor *)endingColor;
@end

