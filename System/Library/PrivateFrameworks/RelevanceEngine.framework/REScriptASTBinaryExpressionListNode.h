/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:26 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/REScriptASTNode.h>

@class NSArray;

@interface REScriptASTBinaryExpressionListNode : REScriptASTNode {

	NSArray* _expressions;

}

@property (nonatomic,readonly) NSArray * expressions;              //@synthesize expressions=_expressions - In the implementation block
+(id)parseBuffer:(id)arg1 error:(id*)arg2 ;
-(id)dependencies;
-(NSArray *)expressions;
-(id)initWithExpressions:(id)arg1 ;
@end

