/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:38:46 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol RLMThreadConfined_Private <NSObject>
@property (nonatomic,readonly) id objectiveCMetadata; 
@required
+(id)objectWithThreadSafeReference:(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)arg1 metadata:(id)arg2 realm:(id)arg3;
-(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)makeThreadSafeReference;
-(id)objectiveCMetadata;

@end

