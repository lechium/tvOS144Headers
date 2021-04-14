/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:37 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/Seeding.framework/Seeding
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface SDLegalDoc : NSObject {

	long long _legal_id;
	NSString* _title;
	NSString* _content;

}

@property (assign) long long legal_id;              //@synthesize legal_id=_legal_id - In the implementation block
@property (copy) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (copy) NSString * content;                //@synthesize content=_content - In the implementation block
+(id)legalDocWithID:(long long)arg1 title:(id)arg2 content:(id)arg3 ;
-(NSString *)content;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setContent:(NSString *)arg1 ;
-(id)initWithID:(long long)arg1 title:(id)arg2 content:(id)arg3 ;
-(void)setLegal_id:(long long)arg1 ;
-(long long)legal_id;
@end

