/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:33:54 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CVNLP/CVNLP-Structs.h>
@class NSString;

@interface CVNLPTextDecodingContext : NSObject {

	NSString* _history;
	NSRange _activeRange;

}

@property (nonatomic,readonly) NSString * history;               //@synthesize history=_history - In the implementation block
@property (nonatomic,readonly) NSRange activeRange;              //@synthesize activeRange=_activeRange - In the implementation block
-(NSString *)history;
-(id)inactiveSubstring;
-(id)activeSubstring;
-(id)initWithHistory:(id)arg1 activeRange:(NSRange)arg2 ;
-(id)initWithHistory:(id)arg1 ;
-(NSRange)activeRange;
@end

