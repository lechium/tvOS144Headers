//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ML3ClientImportSessionConfiguration, NSArray;

@protocol ML3ClientImportServiceSessionXPCInterface
- (void)removeItems:(NSArray *)arg1 completion:(void (^)(ML3ClientImportResult *, NSError *))arg2;
- (void)updateItems:(NSArray *)arg1 completion:(void (^)(ML3ClientImportResult *, NSError *))arg2;
- (void)addItems:(NSArray *)arg1 completion:(void (^)(ML3ClientImportResult *, NSError *))arg2;
- (void)cancelSessionWithCompletion:(void (^)(NSError *))arg1;
- (void)endSessionWithCompletion:(void (^)(NSError *))arg1;
- (void)beginSessionWithConfiguration:(ML3ClientImportSessionConfiguration *)arg1 completion:(void (^)(NSError *))arg2;
@end

