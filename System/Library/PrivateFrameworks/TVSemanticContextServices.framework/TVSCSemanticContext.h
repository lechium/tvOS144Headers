/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:36:36 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/TVSemanticContextServices.framework/TVSemanticContextServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TVSemanticContextServices/TVSCSemanticObject.h>

@class NSDictionary, NSArray;

@interface TVSCSemanticContext : TVSCSemanticObject {

	NSDictionary* _linkedDataContext;
	NSArray* _actions;

}

@property (nonatomic,retain) NSDictionary * linkedDataContext;              //@synthesize linkedDataContext=_linkedDataContext - In the implementation block
@property (nonatomic,retain) NSArray * actions;                             //@synthesize actions=_actions - In the implementation block
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(id)linkedDataDictionary;
-(NSDictionary *)linkedDataContext;
-(void)setLinkedDataContext:(NSDictionary *)arg1 ;
@end

