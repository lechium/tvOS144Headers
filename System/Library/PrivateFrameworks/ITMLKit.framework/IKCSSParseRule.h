/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKCSSParseObject.h>

@class IKArray, IKCSSParseBlock;

@interface IKCSSParseRule : IKCSSParseObject {

	IKArray* _prelude;
	IKCSSParseBlock* _block;
	NSRange __endRange;

}

@property (assign,setter=_setEndRange:,nonatomic) NSRange _endRange;              //@synthesize _endRange=__endRange - In the implementation block
@property (nonatomic,retain) IKArray * prelude;                                   //@synthesize prelude=_prelude - In the implementation block
@property (nonatomic,retain) IKCSSParseBlock * block;                             //@synthesize block=_block - In the implementation block
-(id)description;
-(id)init;
-(NSRange)range;
-(IKCSSParseBlock *)block;
-(void)setBlock:(IKCSSParseBlock *)arg1 ;
-(IKArray *)prelude;
-(NSRange)_endRange;
-(void)setPrelude:(IKArray *)arg1 ;
-(void)_setEndRange:(NSRange)arg1 ;
@end

