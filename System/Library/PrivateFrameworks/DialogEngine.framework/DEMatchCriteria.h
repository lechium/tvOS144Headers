/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:34:14 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <DialogEngine/DialogEngine-Structs.h>
@class NSArray;

@interface DEMatchCriteria : NSObject {

	NSArray* _prefixes;
	NSArray* _suffixes;

}

@property (nonatomic,retain) NSArray * prefixes;              //@synthesize prefixes=_prefixes - In the implementation block
@property (nonatomic,retain) NSArray * suffixes;              //@synthesize suffixes=_suffixes - In the implementation block
+(id)matchCriteriaFromPb:(const MatchCriteria*)arg1 ;
+(void)matchCriteriaToPb:(id)arg1 matchCriteriaPb:(MatchCriteria*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)init;
-(BOOL)all:(id)arg1 ;
-(NSArray *)prefixes;
-(BOOL)any:(id)arg1 ;
-(void)setPrefixes:(NSArray *)arg1 ;
-(id)initWithPrefixes:(id)arg1 suffixes:(id)arg2 ;
-(NSArray *)suffixes;
-(void)setSuffixes:(NSArray *)arg1 ;
@end

