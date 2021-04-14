/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:29:11 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/CoreKnowledge.framework/CoreKnowledge
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CKEphemeralWritableEventSequence
@required
-(void)loadFromKnowledgeStreamNamed:(id)arg1 between:(id)arg2 and:(id)arg3 completionHandler:(/*^block*/id)arg4;
-(void)removeAllEventsSavedInKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)appendEvent:(id)arg1;
-(void)writeEventsToKnowledgeStreamNamed:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end
