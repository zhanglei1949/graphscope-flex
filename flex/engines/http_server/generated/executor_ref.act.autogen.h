/** Copyright 2021 Alibaba Group Holding Limited. All Rights Reserved.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include "executor.act.h"

namespace server {

class executor_ref : public ::hiactor::reference_base {
public:
	executor_ref();
	~executor_ref() override = default;
	/// actor methods
	seastar::future<query_result> run_graph_db_query(server::query_param &&param);
	seastar::future<query_result> run_hqps_adhoc_query(server::query_param &&param);
	seastar::future<query_result> run_hqps_procedure_query(server::query_param &&param);
};

} // namespace server
