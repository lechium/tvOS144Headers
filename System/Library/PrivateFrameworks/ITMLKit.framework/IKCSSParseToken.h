/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:25:35 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ITMLKit/IKCSSParseObject.h>

@class IKCSSToken;

@interface IKCSSParseToken : IKCSSParseObject {

	IKCSSToken* _token;

}

@property (nonatomic,retain) IKCSSToken * token;              //@synthesize token=_token - In the implementation block
-(id)description;
-(id)init;
-(IKCSSToken *)token;
-(void)setToken:(IKCSSToken *)arg1 ;
@end

