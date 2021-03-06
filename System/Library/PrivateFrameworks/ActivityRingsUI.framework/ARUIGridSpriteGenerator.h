/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:13 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface ARUIGridSpriteGenerator : NSObject {

	unsigned long long _spriteCount;
	unsigned long long _framesPerSprite;
	unsigned long long _columnsPerSprite;
	unsigned long long _rowsPerSprite;

}
+(id)generatorWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4 ;
-(id)initWithSpriteCount:(unsigned long long)arg1 framesPerSprite:(unsigned long long)arg2 rowsPerSprite:(unsigned long long)arg3 columnsPerSprite:(unsigned long long)arg4 ;
-(2)originForSpriteAtIndex:(unsigned long long)arg1 ;
-(1)frameSize;
-(id)spriteAtIndex:(unsigned long long)arg1 ;
-(id)generateSprites;
@end

