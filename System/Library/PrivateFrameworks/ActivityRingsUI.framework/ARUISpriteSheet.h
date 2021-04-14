/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityRingsUI/ActivityRingsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, ARUISpriteTexture;

@interface ARUISpriteSheet : NSObject <NSCopying> {

	NSArray* _sprites;
	ARUISpriteTexture* _texture;

}

@property (nonatomic,readonly) ARUISpriteTexture * texture;              //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) NSArray * sprites;                        //@synthesize sprites=_sprites - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(ARUISpriteTexture *)texture;
-(NSArray *)sprites;
-(id)initWithSpriteSheet:(id)arg1 ;
-(id)initWithTexture:(id)arg1 sprites:(id)arg2 ;
@end

