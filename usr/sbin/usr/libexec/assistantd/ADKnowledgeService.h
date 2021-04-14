//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADService.h"

@class CKKnowledgeStore;

@interface ADKnowledgeService : ADService
{
    CKKnowledgeStore *_inMemoryKnowledgeStore;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000010005e00c
- (void)handleSetLinkedData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005d9f4
- (void)handleGetLinkedData:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005d6f8
- (void)handleDeleteValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005d3d0
- (void)handleSetValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005cb3c
- (void)handleGetValuesForKeys:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000010005c408
- (void)handleCommand:(id)arg1 forDomain:(id)arg2 executionContext:(id)arg3 reply:(CDUnknownBlockType)arg4;	// IMP=0x000000010005c170
- (_Bool)implementsCommand:(id)arg1 forDomain:(id)arg2;	// IMP=0x000000010005c168
- (id)commandsForDomain:(id)arg1;	// IMP=0x000000010005c090
- (id)domains;	// IMP=0x000000010005c018
- (id)handle;	// IMP=0x000000010005c014
- (id)knowledgeStoreWithName:(id)arg1 type:(id)arg2 error:(id *)arg3;	// IMP=0x000000010005bcd8
- (id)_inMemoryKnowledgeStore;	// IMP=0x000000010005bc78
- (id)init;	// IMP=0x000000010005bbfc

@end

